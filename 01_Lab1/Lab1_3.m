theta = 0:0.0001:360;
rad = 5;
x = rad * cosd(theta);
y = rad * sind(theta);
plot(x, y)
fill(x, y, 'y');
xlim([-10 10]);
ylim([-10 10]);