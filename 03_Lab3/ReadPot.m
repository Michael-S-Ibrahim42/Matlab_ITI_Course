function varargout = ReadPot(varargin)
% READPOT MATLAB code for ReadPot.fig
%      READPOT, by itself, creates a new READPOT or raises the existing
%      singleton*.
%
%      H = READPOT returns the handle to a new READPOT or the handle to
%      the existing singleton*.
%
%      READPOT('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in READPOT.M with the given input arguments.
%
%      READPOT('Property','Value',...) creates a new READPOT or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before ReadPot_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to ReadPot_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help ReadPot

% Last Modified by GUIDE v2.5 23-Jan-2022 20:07:53

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @ReadPot_OpeningFcn, ...
                   'gui_OutputFcn',  @ReadPot_OutputFcn, ...
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


% --- Executes just before ReadPot is made visible.
function ReadPot_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to ReadPot (see VARARGIN)

% Choose default command line output for ReadPot
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);
a = arduino('COM3', 'Uno');
configurePin(a,'D3','pullup')
x = [];
while n > 10
    input = 
    x = [x 
   
    n -= 1;
end

% --- Outputs from this function are returned to the command line.
function varargout = ReadPot_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;
