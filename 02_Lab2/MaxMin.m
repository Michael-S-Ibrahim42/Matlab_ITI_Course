%Function Test
function [min, max] = MaxMin(Num1, Num2)
    if Num1 > Num2
        min = Num2;
        max = Num1;
    else
        min = Num1;
        max = Num2;
    end
    
    fprintf("The max %d\n", max);
    fprintf("The min %d\n", min);
    
end