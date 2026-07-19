/* Function at 0x805E0924, size=32 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805E0924(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805E092C
    /* li r5, 1 */ // 0x805E0930
    *(0x14 + r1) = r0; // stw @ 0x805E0934
    r3 = r3 + 0; // 0x805E093C
    FUN_805E3430(r3, r5, r4, r3); // bl 0x805E3430
}