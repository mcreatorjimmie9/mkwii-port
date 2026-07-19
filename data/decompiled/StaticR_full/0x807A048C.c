/* Function at 0x807A048C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807A048C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807A0498
    *(0xc + r1) = r31; // stw @ 0x807A049C
    r31 = r3;
    if (==) goto 0x0x807a04c4;
    if (==) goto 0x0x807a0508;
    if (==) goto 0x0x807a056c;
    if (==) goto 0x0x807a05b0;
    /* b 0x807a05fc */ // 0x807A04C0
    /* li r3, 0x18 */ // 0x807A04C4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807a063c;
    /* lis r5, 0 */ // 0x807A04D4
    /* lis r4, 0 */ // 0x807A04D8
    r5 = r5 + 0; // 0x807A04DC
    *(0 + r3) = r5; // stw @ 0x807A04E0
    /* li r0, 0 */ // 0x807A04E4
    r4 = r4 + 0; // 0x807A04E8
}