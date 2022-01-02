x = 1:10;
y = 1:10;
subplot(2,1, 1);
plot(x, y, 'r')
xlabel('x axis')
ylabel('y axis')
axis([0 20 0 20]);
hold on
subplot(2,1, 1);
y = sind(x);
plot(x, y,'b')