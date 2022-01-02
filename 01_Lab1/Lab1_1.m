x = 1:2:50;
y = x + 1;
subplot(2,2,1);
plot(x,y,'b.--')
xlabel('x axis')
ylabel('y axis')
grid on
y = sind(x);
subplot(2, 2, 2);
plot(x, y, 'b.--')
xlabel('x axis')
ylabel('y axis')
grid on
y = cosd(x);
subplot(2,2,3);
plot(x,y,'b.--')
xlabel('x axis')
ylabel('y axis')
grid on
y = tand(x);
subplot(2,2,4);
plot(x,y,'b.--')
xlabel('x axis')
ylabel('y axis')
grid on