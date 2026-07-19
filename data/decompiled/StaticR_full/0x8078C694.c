/* Function at 0x8078C694, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078C694(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8078C6A4
    r30 = r3;
    r4 = *(0x18c + r3); // lwz @ 0x8078C6AC
    r31 = *(0x189 + r3); // lbz @ 0x8078C6B0
    if (==) goto 0x0x8078c6d8;
    if (==) goto 0x0x8078c6c8;
    r0 = *(0x90 + r4); // lwz @ 0x8078C6C0
    /* b 0x8078c6cc */ // 0x8078C6C4
    /* li r0, -1 */ // 0x8078C6C8
    if (!=) goto 0x0x8078c6d8;
    /* li r31, 1 */ // 0x8078C6D4
    r0 = *(0x188 + r3); // lbz @ 0x8078C6D8
    if (!=) goto 0x0x8078c70c;
    if (!=) goto 0x0x8078c70c;
    /* lis r3, 0 */ // 0x8078C6EC
    /* lis r5, 0 */ // 0x8078C6F0
    /* lfs f1, 0(r5) */ // 0x8078C6F4
    /* li r4, 0 */ // 0x8078C6F8
    r3 = *(0 + r3); // lwz @ 0x8078C6FC
    /* li r5, 0x14 */ // 0x8078C700
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    /* b 0x8078c738 */ // 0x8078C708
    if (!=) goto 0x0x8078c738;
    if (!=) goto 0x0x8078c738;
    /* lis r3, 0 */ // 0x8078C71C
    /* lis r5, 0 */ // 0x8078C720
    /* lfs f1, 0(r5) */ // 0x8078C724
    /* li r4, 0 */ // 0x8078C728
    r3 = *(0 + r3); // lwz @ 0x8078C72C
    /* li r5, 0x3c */ // 0x8078C730
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    /* li r0, 0 */ // 0x8078C738
    *(0x188 + r30) = r31; // stb @ 0x8078C73C
    *(0x189 + r30) = r0; // stb @ 0x8078C740
    r31 = *(0xc + r1); // lwz @ 0x8078C744
    r30 = *(8 + r1); // lwz @ 0x8078C748
    r0 = *(0x14 + r1); // lwz @ 0x8078C74C
    return;
}