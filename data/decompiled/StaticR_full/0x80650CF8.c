/* Function at 0x80650CF8, size=112 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_80650CF8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x80650D00
    *(0x14 + r1) = r0; // stw @ 0x80650D04
    r3 = *(0 + r3); // lwz @ 0x80650D08
    r4 = *(0 + r3); // lwz @ 0x80650D0C
    r0 = *(0 + r4); // lwz @ 0x80650D10
    if (==) goto 0x0x80650d28;
    if (==) goto 0x0x80650d38;
    /* b 0x80650d44 */ // 0x80650D24
    /* li r4, 0x7c */ // 0x80650D28
    /* li r5, 0 */ // 0x80650D2C
    FUN_80698C44(r4, r5); // bl 0x80698C44
    /* b 0x80650d44 */ // 0x80650D34
    /* li r4, 0xa0 */ // 0x80650D38
    /* li r5, 0 */ // 0x80650D3C
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    /* lis r3, 0 */ // 0x80650D44
    /* li r4, 0 */ // 0x80650D48
    r3 = *(0 + r3); // lwz @ 0x80650D4C
    /* li r5, 0xff */ // 0x80650D50
    FUN_80698CD0(r3, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x80650D58
    return;
}