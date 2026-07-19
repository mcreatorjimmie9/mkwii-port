/* Function at 0x80672A18, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80672A18(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x80672A20
    r31 = r3 + 0x44; // 0x80672A2C
    *(0x18 + r1) = r30; // stw @ 0x80672A30
    *(0x14 + r1) = r29; // stw @ 0x80672A34
    /* li r29, 0 */ // 0x80672A38
    *(0x10 + r1) = r28; // stw @ 0x80672A3C
    r28 = r3;
    r4 = *(0 + r4); // lwz @ 0x80672A44
    r30 = r4 + 0x34; // 0x80672A48
    /* b 0x80672a70 */ // 0x80672A4C
    r3 = r30;
    r4 = r29;
    FUN_8067F3BC(r3, r4); // bl 0x8067F3BC
    r4 = r3;
    r3 = r31;
    FUN_80670D24(r3, r4, r4, r3); // bl 0x80670D24
    r31 = r31 + 0x184; // 0x80672A68
    r29 = r29 + 1; // 0x80672A6C
    r0 = *(0x664 + r28); // lwz @ 0x80672A70
    if (<) goto 0x0x80672a50;
    r0 = *(8 + r28); // lwz @ 0x80672A7C
    if (!=) goto 0x0x80672aa4;
    r0 = *(0x668 + r28); // lbz @ 0x80672A88
    if (==) goto 0x0x80672aa4;
    r4 = *(0x66c + r28); // lwz @ 0x80672A94
    r3 = r28;
    /* lfs f1, 0x670(r28) */ // 0x80672A9C
    FUN_80671C48(r3); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x80672AA4
    r31 = *(0x1c + r1); // lwz @ 0x80672AA8
    r30 = *(0x18 + r1); // lwz @ 0x80672AAC
    r29 = *(0x14 + r1); // lwz @ 0x80672AB0
    r28 = *(0x10 + r1); // lwz @ 0x80672AB4
    return;
}