/* Function at 0x806822D4, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806822D4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806822DC
    *(0x14 + r1) = r0; // stw @ 0x806822E0
    /* li r0, -1 */ // 0x806822E4
    *(0xc + r1) = r31; // stw @ 0x806822E8
    r31 = r3;
    *(0x2530 + r3) = r0; // stw @ 0x806822F0
    r3 = r3 + 0x298; // 0x806822F4
    FUN_80649EEC(r3); // bl 0x80649EEC
    r3 = r31 + 0x210c; // 0x806822FC
    /* li r4, 0x1126 */ // 0x80682300
    /* li r5, 0 */ // 0x80682304
    FUN_808D5A00(r3, r3, r4, r5); // bl 0x808D5A00
    r3 = r31 + 0x1c34; // 0x8068230C
    FUN_806540D8(r3, r4, r5, r3); // bl 0x806540D8
    if (==) goto 0x0x8068232c;
    r3 = r31 + 0x19e0; // 0x8068231C
    /* li r4, 1 */ // 0x80682320
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x80682338 */ // 0x80682328
    r3 = r31 + 0x19e0; // 0x8068232C
    /* li r4, 0 */ // 0x80682330
    FUN_80649FD0(r4, r3, r4); // bl 0x80649FD0
    r0 = *(0x14 + r1); // lwz @ 0x80682338
    r31 = *(0xc + r1); // lwz @ 0x8068233C
    return;
}