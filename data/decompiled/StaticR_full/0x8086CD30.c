/* Function at 0x8086CD30, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8086CD30(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8086CD44
    r29 = r3;
    r5 = *(0x1c4 + r3); // lwz @ 0x8086CD4C
    if (==) goto 0x0x8086cd5c;
    /* b 0x8086cd60 */ // 0x8086CD58
    r5 = *(0x1a0 + r3); // lwz @ 0x8086CD5C
    r3 = *(0xa4 + r3); // lwz @ 0x8086CD60
    /* lis r4, 0x101 */ // 0x8086CD64
    r4 = r4 + 0x101; // 0x8086CD68
    r30 = *(0x18 + r5); // lbz @ 0x8086CD6C
    r0 = *(0x20 + r3); // lwz @ 0x8086CD70
    /* andc. r0, r4, r0 */ // 0x8086CD74
    if (==) goto 0x0x8086cdc0;
    /* lis r31, 0 */ // 0x8086CD7C
    r4 = *(0xa + r29); // lha @ 0x8086CD80
    r3 = *(0 + r31); // lwz @ 0x8086CD84
    r5 = r30;
    r3 = *(0x74 + r3); // lwz @ 0x8086CD8C
    FUN_8071D70C(r5); // bl 0x8071D70C
    r0 = *(0x7c + r29); // lwz @ 0x8086CD94
    r3 = *(0 + r31); // lwz @ 0x8086CD98
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8086CD9C
    r4 = *(0xa + r29); // lha @ 0x8086CDA0
    r3 = *(0x74 + r3); // lwz @ 0x8086CDA4
    if (==) goto 0x0x8086cdb4;
    r5 = r29 + 0x8c; // 0x8086CDAC
    /* b 0x8086cdb8 */ // 0x8086CDB0
    r5 = *(0x98 + r29); // lwz @ 0x8086CDB4
    r6 = r30;
    FUN_8071D7A4(r5, r6); // bl 0x8071D7A4
    /* lis r3, 0 */ // 0x8086CDC0
    r4 = *(0xa + r29); // lha @ 0x8086CDC4
    r3 = *(0 + r3); // lwz @ 0x8086CDC8
    r3 = *(0x74 + r3); // lwz @ 0x8086CDCC
    FUN_8071D6F0(r3); // bl 0x8071D6F0
    r3 = r29;
    FUN_80828D50(r3); // bl 0x80828D50
    r0 = *(0x24 + r1); // lwz @ 0x8086CDDC
    r31 = *(0x1c + r1); // lwz @ 0x8086CDE0
    r30 = *(0x18 + r1); // lwz @ 0x8086CDE4
    r29 = *(0x14 + r1); // lwz @ 0x8086CDE8
    return;
}