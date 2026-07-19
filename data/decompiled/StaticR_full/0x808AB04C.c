/* Function at 0x808AB04C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_808AB04C(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808AB054
    *(0x14 + r1) = r0; // stw @ 0x808AB058
    r3 = *(0 + r3); // lwz @ 0x808AB05C
    if (==) goto 0x0x808ab06c;
    FUN_808F98B8(r3); // bl 0x808F98B8
    /* lis r3, 0 */ // 0x808AB06C
    r3 = *(0 + r3); // lwz @ 0x808AB070
    if (==) goto 0x0x808ab080;
    FUN_80908CDC(r3); // bl 0x80908CDC
    r0 = *(0x14 + r1); // lwz @ 0x808AB080
    return;
}