/* Function at 0x8065BB94, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8065BB94(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8065BBA0
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x8065BBA8
    if (!=) goto 0x0x8065bbfc;
    r4 = *(0x19f8 + r3); // lwz @ 0x8065BBB4
    /* addic. r0, r4, -1 */ // 0x8065BBB8
    *(0x19f8 + r3) = r0; // stw @ 0x8065BBBC
    if (>=) goto 0x0x8065bbfc;
    FUN_8065C37C(); // bl 0x8065C37C
    /* li r0, 0x12c */ // 0x8065BBC8
    *(0x19f8 + r31) = r0; // stw @ 0x8065BBCC
    /* lis r31, 0 */ // 0x8065BBD0
    r3 = *(0 + r31); // lwz @ 0x8065BBD4
    r3 = *(0 + r3); // lwz @ 0x8065BBD8
    r3 = *(0x404 + r3); // lwz @ 0x8065BBDC
    FUN_806598D0(); // bl 0x806598D0
    if (!=) goto 0x0x8065bbfc;
    r3 = *(0 + r31); // lwz @ 0x8065BBEC
    r3 = *(0 + r3); // lwz @ 0x8065BBF0
    r3 = *(0x404 + r3); // lwz @ 0x8065BBF4
    FUN_80659960(); // bl 0x80659960
    r0 = *(0x14 + r1); // lwz @ 0x8065BBFC
    r31 = *(0xc + r1); // lwz @ 0x8065BC00
    return;
}