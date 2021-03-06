theta = 0 : 0.01 : 360;
line1X = [5 5.3 5.3 5];
line1Y = [0.5 0.8 1 0.7];
line2X = [5 5.3 5.3 5];
line2Y = [1.7 2 2.2 1.9];
cir1X = 5.15 + 0.7 * sind(theta); 
cir1Y = 3.8 + 0.7 * cosd(theta);
cir2X = 5.15 + 0.7 * sind(theta);
cir2Y = 5.4 + 0.7 * cosd(theta);
cir3X = 5.15 + 0.7 * sind(theta);
cir3Y = 7 + 0.7 * cosd(theta);
panelStick = rectangle('Position', [5 0 0.3 3], 'Curvature', [0.2 0.2], 'FaceColor', [0.5 0.5 0.5]);
hold on;
panel = rectangle('Position', [4.2 3 1.9 5], 'Curvature', [0.2 0.2], 'FaceColor', 'k');
hold on;
fill(line1X, line1Y, 'y');
fill(line2X, line2Y, 'y');
xlim([0 10]);
ylim([-1 10]);
grid on;
for n = 1:5 
    fill(cir1X, cir1Y, [0.0157 0.47 0]);
    fill(cir2X, cir2Y, [0.47 0.443 0]);
    fill(cir3X, cir3Y, 'r');
    pause(1)
    fill(cir1X, cir1Y, [0.0157 0.47 0]);
    fill(cir2X, cir2Y, [1 0.9686 0]);
    fill(cir3X, cir3Y, [0.47 0 0]);
    pause(1)
    fill(cir1X, cir1Y, 'g');
    fill(cir2X, cir2Y, [0.47 0.443 0]);
    fill(cir3X, cir3Y, [0.47 0 0]);
    pause(1)
end
