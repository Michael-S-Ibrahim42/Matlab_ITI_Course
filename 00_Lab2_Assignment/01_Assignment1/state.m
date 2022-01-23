function varargout = state(varargin)
% STATE MATLAB code for state.fig
%      STATE, by itself, creates a new STATE or raises the existing
%      singleton*.
%
%      H = STATE returns the handle to a new STATE or the handle to
%      the existing singleton*.
%
%      STATE('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in STATE.M with the given input arguments.
%
%      STATE('Property','Value',...) creates a new STATE or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before state_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to state_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help state

% Last Modified by GUIDE v2.5 23-Jan-2022 14:35:35

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @state_OpeningFcn, ...
                   'gui_OutputFcn',  @state_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT
global sadImage;
global happyImage;
sadImage = imread('sad.jpg');
happyImage = imread('happy.jpg');

% --- Executes just before state is made visible.
function state_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to state (see VARARGIN)

% Choose default command line output for state
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes state wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = state_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in imageViewer.
function imageViewer_Callback(hObject, eventdata, handles)
% hObject    handle to imageViewer (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
age = get(handles.ageBox, 'String');
age = str2double(age);
axes(handles.ageAxes);
if isnan(age)
    set(handles.ageAxes, 'visible', 'off');
    set(handles.state, 'visible', 'off');
elseif age <= 60
    set(handles.state, 'visible', 'on');
    set(handles.ageAxes, 'visible', 'on');
    global happyImage;
    imshow(happyImage);
    set(handles.state, 'String', 'Happy');
else
    set(handles.state, 'visible', 'on');
    set(handles.ageAxes, 'visible', 'on');
    global sadImage;
    imshow(sadImage);
    set(handles.state, 'String', 'Sad');
end


function ageBox_Callback(hObject, eventdata, handles)
% hObject    handle to ageBox (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of ageBox as text
%        str2double(get(hObject,'String')) returns contents of ageBox as a double


% --- Executes during object creation, after setting all properties.
function ageBox_CreateFcn(hObject, eventdata, handles)
% hObject    handle to ageBox (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
