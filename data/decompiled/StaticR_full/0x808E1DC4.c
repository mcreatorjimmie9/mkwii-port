/* Function at 0x808E1DC4, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808E1DC4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x808E1DCC
    *(0x18 + r1) = r30; // stw @ 0x808E1DD8
    *(0x14 + r1) = r29; // stw @ 0x808E1DDC
    r29 = r3;
    r5 = *(0 + r5); // lwz @ 0x808E1DE4
    r5 = *(0 + r5); // lwz @ 0x808E1DE8
    r0 = *(0 + r5); // lwz @ 0x808E1DEC
    if (!=) goto 0x0x808e1e5c;
    r30 = r4 rlwinm 1; // rlwinm
    r3 = *(4 + r3); // lwz @ 0x808E1DFC
    r0 = r30 + 0x18; // 0x808E1E00
    /* mulli r31, r0, 0x28 */ // 0x808E1E04
    r3 = r3 + r31; // 0x808E1E08
    r3 = *(4 + r3); // lwz @ 0x808E1E0C
    if (==) goto 0x0x808e1e2c;
    FUN_805EF474(); // bl 0x805EF474
    r0 = *(4 + r29); // lwz @ 0x808E1E1C
    /* li r4, 0 */ // 0x808E1E20
    r3 = r0 + r31; // 0x808E1E24
    *(4 + r3) = r4; // stw @ 0x808E1E28
    r0 = r30 + 0x19; // 0x808E1E2C
    r3 = *(4 + r29); // lwz @ 0x808E1E30
    /* mulli r31, r0, 0x28 */ // 0x808E1E34
    r3 = r3 + r31; // 0x808E1E38
    r3 = *(4 + r3); // lwz @ 0x808E1E3C
    if (==) goto 0x0x808e1e5c;
    FUN_805EF474(); // bl 0x805EF474
    r0 = *(4 + r29); // lwz @ 0x808E1E4C
    /* li r4, 0 */ // 0x808E1E50
    r3 = r0 + r31; // 0x808E1E54
    *(4 + r3) = r4; // stw @ 0x808E1E58
    r0 = *(0x24 + r1); // lwz @ 0x808E1E5C
    r31 = *(0x1c + r1); // lwz @ 0x808E1E60
    r30 = *(0x18 + r1); // lwz @ 0x808E1E64
    r29 = *(0x14 + r1); // lwz @ 0x808E1E68
    return;
}