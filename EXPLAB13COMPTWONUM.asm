MOV A,#0AH
MOV B,#08H

CJNE A,B,CHECK
SJMP EQUAL

CHECK:JC LESS
SJMP GREATER

EQUAL: MOV R0, #01H
SJMP END

LESS: MOV R0, #02H
SJMP END

GREATER: MOV R0, #03H

END: SJMP END