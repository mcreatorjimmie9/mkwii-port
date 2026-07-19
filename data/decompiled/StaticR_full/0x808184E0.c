/* Function at 0x808184E0, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808184E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808184E8
    *(0x14 + r1) = r0; // stw @ 0x808184EC
    *(0xc + r1) = r31; // stw @ 0x808184F0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x808184F8
    r4 = r31;
    FUN_8061D97C(r4); // bl 0x8061D97C
    FUN_8061DEF4(r4); // bl 0x8061DEF4
    if (==) goto 0x0x80818518;
    /* li r3, 0 */ // 0x80818510
    /* b 0x80818540 */ // 0x80818514
    /* lis r4, 0 */ // 0x80818518
    /* lis r3, 0 */ // 0x8081851C
    /* mulli r0, r31, 0xf0 */ // 0x80818520
    r4 = *(0 + r4); // lwz @ 0x80818524
    r3 = *(0 + r3); // lwz @ 0x80818528
    r4 = r4 + r0; // 0x8081852C
    r0 = *(0x38 + r4); // lwz @ 0x80818530
    if (!=) goto 0x0x80818540;
    /* li r3, 4 */ // 0x8081853C
    r0 = *(0x14 + r1); // lwz @ 0x80818540
    r31 = *(0xc + r1); // lwz @ 0x80818544
    return;
}