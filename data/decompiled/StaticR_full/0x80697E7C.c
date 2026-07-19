/* Function at 0x80697E7C, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80697E7C(int r3)
{
    /* Stack frame: -16(r1) */
    /* li r3, 0x9c */ // 0x80697E84
    *(0x14 + r1) = r0; // stw @ 0x80697E88
    FUN_805E3430(r3); // bl 0x805E3430
}