function varargout = counter(varargin)
% COUNTER MATLAB code for counter.fig
%      COUNTER, by itself, creates a new COUNTER or raises the existing
%      singleton*.
%
%      H = COUNTER returns the handle to a new COUNTER or the handle to
%      the existing singleton*.
%
%      COUNTER('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in COUNTER.M with the given input arguments.
%
%      COUNTER('Property','Value',...) creates a new COUNTER or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before counter_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to counter_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help counter

% Last Modified by GUIDE v2.5 02-Jan-2022 18:08:30

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @counter_OpeningFcn, ...
                   'gui_OutputFcn',  @counter_OutputFcn, ...
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


% --- Executes just before counter is made visible.
function counter_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to counter (see VARARGIN)

% Choose default command line output for counter
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);
iti = imread('ITI.png');
imshow(iti);
global Counter;
Counter = 0;
axes(handles.Image);
% UIWAIT makes counter wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = counter_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global Counter;
Counter = Counter + 1;
set(handles.dis,'String',Counter);