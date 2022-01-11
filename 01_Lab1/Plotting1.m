x = 0:1:50;
y = x + 1;
fplot(@(x)x+1, [0 1]);
xlabel('X axis');
ylabel('Y axis');
grid on