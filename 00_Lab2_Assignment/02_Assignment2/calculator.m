function varargout = calculator(varargin)
% CALCULATOR MATLAB code for calculator.fig
%      CALCULATOR, by itself, creates a new CALCULATOR or raises the existing
%      singleton*.
%
%      H = CALCULATOR returns the handle to a new CALCULATOR or the handle to
%      the existing singleton*.
%
%      CALCULATOR('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in CALCULATOR.M with the given input arguments.
%
%      CALCULATOR('Property','Value',...) creates a new CALCULATOR or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before calculator_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to calculator_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help calculator

% Last Modified by GUIDE v2.5 30-Jan-2022 15:22:09

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @calculator_OpeningFcn, ...
                   'gui_OutputFcn',  @calculator_OutputFcn, ...
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


% --- Executes just before calculator is made visible.
function calculator_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to calculator (see VARARGIN)

% Choose default command line output for calculator
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes calculator wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = calculator_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on selection change in menu1.
function menu1_Callback(hObject, eventdata, handles)
% hObject    handle to menu1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns menu1 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from menu1


% --- Executes during object creation, after setting all properties.
function menu1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to menu1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in leftEqual.
function leftEqual_Callback(hObject, eventdata, handles)
set(handles.leftConsole, "String", '');
lNum = str2double(get(handles.num1,'String'));
rNum = str2double(get(handles.num2, 'String'));
op = get(handles.leftOpSel, 'Value');
if (~isnan(lNum)) & (~isnan(rNum))
   switch op
       case 1
           res = lNum + rNum;
       case 2
           res = lNum - rNum;
       case 3
           res = lNum * rNum;
       case 4
           if rNum == 0
                set(handles.leftConsole, "String", 'You can not divide by zero');
                res = 0;
           else
                res = lNum / rNum;
           end
   end
end
if rNum == 0 & op == 4
    set(handles.leftRes, 'String', "");
else
    set(handles.leftRes, 'String', num2str(res));
end


function num1_Callback(hObject, eventdata, handles)
    
function num1_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function num2_Callback(hObject, eventdata, handles)

function num2_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function equation_Callback(hObject, eventdata, handles)

function equation_CreateFcn(hObject, eventdata, handles)
% hObject    handle to equation (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function xAxis_Callback(hObject, eventdata, handles)
% hObject    handle to xAxis (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of xAxis as text
%        str2double(get(hObject,'String')) returns contents of xAxis as a double


% --- Executes during object creation, after setting all properties.
function xAxis_CreateFcn(hObject, eventdata, handles)
% hObject    handle to xAxis (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function yAxis_Callback(hObject, eventdata, handles)
% hObject    handle to yAxis (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of yAxis as text
%        str2double(get(hObject,'String')) returns contents of yAxis as a double


% --- Executes during object creation, after setting all properties.
function yAxis_CreateFcn(hObject, eventdata, handles)
% hObject    handle to yAxis (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in popupmenu2.
function popupmenu2_Callback(hObject, eventdata, handles)
% hObject    handle to popupmenu2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns popupmenu2 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from popupmenu2


% --- Executes during object creation, after setting all properties.
function popupmenu2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to popupmenu2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

% --- Executes on button press in rightEqual.
function rightEqual_Callback(hObject, eventdata, handles)
    set(handles.rightRes, "String", "");
    set(handles.rightConsole, "String", "");
    xAxis = str2num(get(handles.xAxis, "String"));
    if(get(handles.yAxis, "String") == "")
        yAxis = get(handles.equation, "String");
        yAxis = split(yAxis(1), "=");
        yAxis = inline(char(yAxis(2)));
        yAxis = yAxis(xAxis);
        set(handles.yAxis, "String", num2str(yAxis));
    else 
        yAxis = str2num(get(handles.yAxis, "String"));
    end
    op = get(handles.rightOpDisp, "String");
    
    if(size(xAxis) == size(yAxis))
        switch(op)
            case '+'
                res = xAxis + yAxis;
                set(handles.rightRes, "String", num2str(res));
            case '-'
                res = xAxis - yAxis;
                set(handles.rightRes, "String", num2str(res));
            case '*'
                res = xAxis .* yAxis;
                set(handles.rightRes, "String", num2str(res));
            case '/'
                if(all(yAxis))
                    res = xAxis ./ yAxis;                    
                    set(handles.rightRes, "String", num2str(res));
                else
                    set(handles.rightConsole, "String", "Divide by zero");
                end

        end
    else
        set(handles.rightConsole, "String", "Not equal arguments length");
    end
    
% --- Executes on selection change in leftOpSel.
function leftOpSel_Callback(hObject, eventdata, handles)
    set(handles.leftRes, "String", "");
    set(handles.num1, "String", "");
    set(handles.num2, "String", "");
    op = get(hObject,'Value');
    switch(op)
        case 1
            set(handles.leftOpDisp, "String", "+");
        case 2
            set(handles.leftOpDisp, "String", "-");
        case 3
            set(handles.leftOpDisp, "String", "*");
        case 4
            set(handles.leftOpDisp, "String", "/");
    end
% --- Executes during object creation, after setting all properties.
function leftOpSel_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function listbox2_Callback(hObject, eventdata, handles)
% hObject    handle to listbox2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns listbox2 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from listbox2


% --- Executes during object creation, after setting all properties.
function listbox2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to listbox2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in enter.
function enter_Callback(hObject, eventdata, handles)
    global fig
    btn = get(get(handles.plotSelection, "SelectedObject"), "tag");
    switch(btn)
        case 'x_axis'
            x = str2num(get(handles.xAxis, "String"));
            fig = plot(x, 'b*');
            xlim([0 length(x)+1]);
            ylim([min(x)-1 max(x)+1]);
        case 'y_axis'
            if(get(handles.yAxis, "String") == "")
                yAxis = split(get(handles.equation, "String"), "=");
                yAxis = inline(char(yAxis(2)));
                yAxis = yAxis(xAxis);
            else 
                yAxis = str2num(get(handles.yAxis, "String"));
            end
            fig = plot(yAxis, 'b*');
            xlim([0 length(yAxis)+1]);
            ylim([min(yAxis)-1 max(yAxis)+1]);
        case 'x_y_axis'
            x = str2num(get(handles.xAxis, "String"));
            y = str2num(get(handles.yAxis, "String"));
            fig = plot(x, y, 'b*');
            xlim([min(x)-1 max(x)+1]);
            ylim([min(y)-1 max(y)+1]);
        case 'resultant'
            res = str2num(get(handles.rightRes, "String"));
            fig = plot(res, 'b*');
            xlim([0 length(res)+1]);
            ylim([min(res)-1 max(res)+1]);
        case 'sine'
            res = str2num(get(handles.rightRes, "String"));
            sine = sind(res);
            fig = plot(res, sine, 'b*');
            xlim([min(res)-1 max(res)+1]);
            ylim([min(sine)-1 max(sine)+1]);
        case 'cosine'
            res = str2num(get(handles.rightRes, "String"));
            cosine = cosd(res);
            fig = plot(res, cosine, 'b*');
            xlim([min(res)-1 max(res)+1]);
            ylim([min(cosine)-1 max(cosine)+1]);
        case 'equation'
            xAxis = str2num(get(handles.xAxis, "String"));
            yAxis = get(handles.equation, "String");
            yAxis = split(yAxis(1), "=");
            yAxis = inline(char(yAxis(2)));
            yAxis = yAxis(xAxis);
            fig = plot(xAxis, yAxis, 'b*');
            xlim([min(xAxis)-1 max(xAxis)+1]);
            ylim([min(yAxis)-1 max(yAxis)+1]);
    end            
    
% --- Executes on button press in delete.
function delete_Callback(hObject, eventdata, handles)   
    global fig
    delete(fig)

% --- If Enable == 'on', executes on mouse press in 5 pixel border.
% --- Otherwise, executes on mouse press in 5 pixel border or over leftOpSel.
function leftOpSel_ButtonDownFcn(hObject, eventdata, handles)


% --- Executes on key press with focus on num1 and none of its controls.
function num1_KeyPressFcn(hObject, eventdata, handles)


% --- Executes on selection change in rightOpSel.
function rightOpSel_Callback(hObject, eventdata, handles)
    set(handles.xAxis, "String", "");
    set(handles.yAxis, "String", "");
    set(handles.rightRes, "String", "");
    op = get(hObject, 'Value');
    
    switch(op)
        case 1
            set(handles.rightOpDisp, "String", '+');
        case 2
            set(handles.rightOpDisp, "String", '-');
        case 3
            set(handles.rightOpDisp, "String", '*');
        case 4
            set(handles.rightOpDisp, "String", '/');            
    end
function rightOpSel_CreateFcn(hObject, eventdata, handles)
% hObject    handle to rightOpSel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: listbox controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
