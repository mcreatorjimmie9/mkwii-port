/* Function at 0x8068657C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8068657C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80686588
    if (>) goto 0x0x80687868;
    /* lis r4, 0 */ // 0x80686590
    /* slwi r0, r3, 2 */ // 0x80686594
    r4 = r4 + 0; // 0x80686598
    /* lwzx r4, r4, r0 */ // 0x8068659C
    /* mtctr r4 */ // 0x806865A0
    /* bctr  */ // 0x806865A4
    /* li r3, 0x54 */ // 0x806865A8
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8068786c;
    FUN_80653864(r3); // bl 0x80653864
}