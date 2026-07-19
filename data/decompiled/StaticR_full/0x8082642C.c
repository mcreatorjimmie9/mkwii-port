/* Function at 0x8082642C, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8082642C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80826438
    *(0xc + r1) = r31; // stw @ 0x8082643C
    if (==) goto 0x0x808264b8;
    if (==) goto 0x0x80826450;
    r6 = *(0 + r4); // lbz @ 0x8082644C
    if (==) goto 0x0x80826460;
    *(0 + r3) = r6; // stb @ 0x80826458
    /* b 0x80826464 */ // 0x8082645C
    r6 = *(0 + r3); // lbz @ 0x80826460
    r31 = r3 + 1; // 0x80826468
    if (!=) goto 0x0x808264bc;
    if (==) goto 0x0x808264a4;
    /* lis r3, 0 */ // 0x80826478
    r3 = *(0 + r3); // lwz @ 0x8082647C
    r3 = *(0x18 + r3); // lwz @ 0x80826480
    if (==) goto 0x0x80826494;
    r0 = *(4 + r3); // lhz @ 0x8082648C
    /* b 0x80826498 */ // 0x80826490
    /* li r0, 0 */ // 0x80826494
    if (<) goto 0x0x808264a4;
    /* li r6, 0xff */ // 0x808264A0
    r3 = r4;
    r4 = r6;
    /* li r5, 1 */ // 0x808264AC
    FUN_8083F014(r6, r3, r4, r5); // bl 0x8083F014
    /* b 0x808264bc */ // 0x808264B4
    r31 = r3 + 1; // 0x808264B8
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x808264C0
    r0 = *(0x14 + r1); // lwz @ 0x808264C4
    return;
}