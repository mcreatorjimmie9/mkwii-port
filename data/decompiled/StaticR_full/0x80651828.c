/* Function at 0x80651828, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80651828(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8065183C
    r29 = r3;
    r0 = *(0x1920 + r3); // lwz @ 0x80651844
    if (!=) goto 0x0x806518f8;
    /* lis r3, 0 */ // 0x80651850
    r3 = *(0 + r3); // lwz @ 0x80651854
    r3 = *(0 + r3); // lwz @ 0x80651858
    r30 = *(0x2dc + r3); // lwz @ 0x8065185C
    if (!=) goto 0x0x80651870;
    /* li r30, 0 */ // 0x80651868
    /* b 0x806518c4 */ // 0x8065186C
    /* lis r31, 0 */ // 0x80651870
    r31 = r31 + 0; // 0x80651874
    if (==) goto 0x0x806518c0;
    r12 = *(0 + r30); // lwz @ 0x8065187C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x80651884
    /* mtctr r12 */ // 0x80651888
    /* bctrl  */ // 0x8065188C
    /* b 0x806518a8 */ // 0x80651890
    if (!=) goto 0x0x806518a4;
    /* li r0, 1 */ // 0x8065189C
    /* b 0x806518b4 */ // 0x806518A0
    r3 = *(0 + r3); // lwz @ 0x806518A4
    if (!=) goto 0x0x80651894;
    /* li r0, 0 */ // 0x806518B0
    if (==) goto 0x0x806518c0;
    /* b 0x806518c4 */ // 0x806518BC
    /* li r30, 0 */ // 0x806518C0
    r0 = *(0xc6c + r30); // lwz @ 0x806518C4
    if (!=) goto 0x0x806518f0;
    r3 = *(0x1914 + r29); // lwz @ 0x806518D0
    r4 = *(0x1918 + r29); // lwz @ 0x806518D4
    FUN_806608D4(); // bl 0x806608D4
    r3 = *(0x1880 + r29); // lwz @ 0x806518DC
    FUN_806610B4(); // bl 0x806610B4
    /* li r0, 3 */ // 0x806518E4
    *(0x1920 + r29) = r0; // stw @ 0x806518E8
    /* b 0x806518f8 */ // 0x806518EC
    /* li r0, 0 */ // 0x806518F0
    *(0x1920 + r29) = r0; // stw @ 0x806518F4
    r0 = *(0x24 + r1); // lwz @ 0x806518F8
    r31 = *(0x1c + r1); // lwz @ 0x806518FC
    r30 = *(0x18 + r1); // lwz @ 0x80651900
    r29 = *(0x14 + r1); // lwz @ 0x80651904
    return;
}