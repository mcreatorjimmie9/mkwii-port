/* Function at 0x80777AA0, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80777AA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80777AB0
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x80777AB8
    r30 = r3;
    if (==) goto 0x0x80777ad0;
    if (==) goto 0x0x80777af4;
    /* b 0x80777b14 */ // 0x80777ACC
    r0 = *(0xb8 + r3); // lhz @ 0x80777AD0
    if (==) goto 0x0x80777b14;
    r3 = r4;
    /* li r4, 0 */ // 0x80777AE0
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 5 */ // 0x80777AE8
    *(0xbc + r30) = r0; // stw @ 0x80777AEC
    /* b 0x80777b14 */ // 0x80777AF0
    r0 = *(0xb8 + r3); // lhz @ 0x80777AF4
    if (==) goto 0x0x80777b14;
    r3 = r4;
    /* li r4, 0 */ // 0x80777B04
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 5 */ // 0x80777B0C
    *(0xbc + r30) = r0; // stw @ 0x80777B10
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80777B18
    r30 = *(8 + r1); // lwz @ 0x80777B1C
    r0 = *(0x14 + r1); // lwz @ 0x80777B20
    return;
}