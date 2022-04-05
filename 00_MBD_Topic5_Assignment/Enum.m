classdef Enum < Simulink.IntEnumType
    enumeration
        Zero(0)
        One(1)
        Two(2)
        Three(3)
    end
    methods(Static)
        function returnVal = getDefaultVal()
            returnVal = Enum.Zero;
        end
    end
end