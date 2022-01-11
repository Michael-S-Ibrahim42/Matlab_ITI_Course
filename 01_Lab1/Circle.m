theta = 0 : 0.001: 2*pi;
rad = 5;
x = rad * cos(theta);
y = rad * sin(theta);
plot(x, y);
% fill(x, y, 'r');
xlim([-10 10]);
ylim([-10 10]);
grid on;