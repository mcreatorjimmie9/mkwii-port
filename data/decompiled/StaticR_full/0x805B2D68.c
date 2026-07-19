/* Function at 0x805B2D68, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_805B2D68(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805B2D70
    *(0x14 + r1) = r0; // stw @ 0x805B2D74
    r0 = *(0 + r3); // lwz @ 0x805B2D78
    if (!=) goto 0x0x805b2da0;
    /* li r3, 0x415c */ // 0x805B2D84
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805b2d98;
    FUN_805B2F1C(r3); // bl 0x805B2F1C
    /* lis r4, 0 */ // 0x805B2D98
    *(0 + r4) = r3; // stw @ 0x805B2D9C
    r0 = *(0x14 + r1); // lwz @ 0x805B2DA0
}