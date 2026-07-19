/* Function at 0x8082A948, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8082A948(int r3)
{
    /* Stack frame: -16(r1) */
    /* li r3, 0x2c */ // 0x8082A950
    *(0x14 + r1) = r0; // stw @ 0x8082A954
    FUN_805E3430(r3); // bl 0x805E3430
}