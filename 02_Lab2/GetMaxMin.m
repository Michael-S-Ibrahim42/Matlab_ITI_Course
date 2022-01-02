function [min, max] = GetMaxMin(Num1, Num2)
    if Num1 < Num2
        min = Num1;
        max = Num2;
    else 
        min = Num2;
        max = Num1;
end