% --- Executes on button press in enter.
function enter_Callback(hObject, eventdata, handles)
% hObject    handle to enter (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

global plot_fig

% initialize by don't show any console errors
set(handles.errCon_axis, "Visible", 'off');

btn = get(handles.uibuttongroup1, "SelectedObject");        % get the selected button form radio group
switch(get(btn, "tag"))                                     % get the tag name of the selected button to plot the required graph
    case 'x_plot'                                           % x - axis plot
        x = str2num(get(handles.x_axis, "String"));         % get the x - axis
        if(isempty(x))                                      % if x - axis is empty --> diplay console error
            set(handles.errCon_axis, "String", "must enter data"); 
            set(handles.errCon_axis, "Visible", 'on');
            return
        end
        plot_fig = plot(x,0,'*r');                          % plot the x - axis on the x direction
        ylim([0 1])                                         % set y - axis limit
        
    case 'y_plot'                                           % y - axis plot
        y = str2num(get(handles.y_axis, "String"));         % get the y - axis
        if(isempty(y))                                      % if y - axis is empty --> diplay console error
            set(handles.errCon_axis, "String", "must enter data"); 
            set(handles.errCon_axis, "Visible", 'on');
            return
        end
        plot_fig = plot(0,y,'*r');                          % plot the y - axis on the y direction
        xlim([0 1])                                         % set x - axis limit
        
    case 'xy_plot'                                          % xy - axis plot
        x = str2num(get(handles.x_axis, "String"));         % get the x - axis
        y = str2num(get(handles.y_axis, "String"));         % get the y - axis
        if(isempty(x)|| isempty(y))                         % if x - axis or y - axis is empty --> diplay console error
            set(handles.errCon_axis, "String", "must enter data"); 
            set(handles.errCon_axis, "Visible", 'on');
            return
        end
        plot_fig = plot(x,y,'*r');                          % plot x vs. y

    case 'resultant_plot'                                   % resultant plot
        res = str2num(get(handles.res_axis, "String"));     % get the resultant axis
        if(isempty(res))                                    % if resultant axis is empty --> diplay console error
            set(handles.errCon_axis, "String", "must enter data"); 
            set(handles.errCon_axis, "Visible", 'on');
            return
        end
        plot_fig = plot(res,0,'*r');                        % plot the resultant axis on the x direction
        ylim([0 1])                                         % set y - axis limit
        
    case 'sin_plot'                                         % plot sin
        x = 0:0.01:360*2;                                   % x values for sin --> 720 degree
        y = sind(x);                                        % y = sin(x) in degrees
        plot_fig = plot(x,y);                               % plot sin graph
        
    case 'cos_plot'                                         % plot cos
        x = 0:0.01:360*2;                                   % x values for cos --> 720 degree
        y = cosd(x);                                        % y = cos(x) in degrees
        plot_fig = plot(x,y);                               % plot cos graph
        
    case 'equation_plot'                                    % plot any equation graph
        equ = str2sym(get(handles.func, "String"));         % get symbolic expression
        if(isempty(equ))                                    % if equation field is empty --> diplay console error
            set(handles.errCon_axis, "String", "must enter data"); 
            set(handles.errCon_axis, "Visible", 'on');
            return
        end
        try
            plot_fig = fplot(equ);                          % function plot user for ex. tan(x)
        catch
            plot_fig = fimplicit(equ);                      % function implicit plot used for ex. y = tan(x)
        end
end


% --- Executes on button press in delete.
function delete_Callback(hObject, eventdata, handles)
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

global plot_fig
delete(plot_fig)                        % deletes the plotted function from the axes


function x_plot_Callback(hObject, eventdata, handles)
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

function y_plot_Callback(hObject, eventdata, handles)
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

function xy_plot_Callback(hObject, eventdata, handles)
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

function resultant_plot_Callback(hObject, eventdata, handles)
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

function sin_plot_Callback(hObject, eventdata, handles)
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

function cos_plot_Callback(hObject, eventdata, handles)
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

function equation_plot_Callback(hObject, eventdata, handles)
% hObject    handle to delete (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)