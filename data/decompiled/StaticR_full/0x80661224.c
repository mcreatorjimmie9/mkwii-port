/* Function at 0x80661224, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80661224(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80661234
    r30 = r3;
    r3 = r3 + 0x188; // 0x8066123C
    FUN_8066D634(r3); // bl 0x8066D634
    r3 = r30 + 0x238; // 0x80661244
    FUN_8066D634(r3, r3); // bl 0x8066D634
    r3 = r30 + 0x3dc; // 0x8066124C
    FUN_805ABE9C(r3, r3, r3); // bl 0x805ABE9C
    /* lis r31, 0 */ // 0x80661254
    r3 = r30 + 0x188; // 0x80661258
    r6 = *(0 + r31); // lwz @ 0x8066125C
    /* li r4, 0xc */ // 0x80661260
    /* li r5, 0x24 */ // 0x80661264
    r6 = *(0x34 + r6); // lwz @ 0x80661268
    FUN_8066D808(r3, r4, r5); // bl 0x8066D808
    r6 = *(0 + r31); // lwz @ 0x80661270
    r3 = r30 + 0x238; // 0x80661274
    /* li r4, 2 */ // 0x80661278
    /* li r5, 0 */ // 0x8066127C
    r6 = *(0x34 + r6); // lwz @ 0x80661280
    FUN_8066D808(r3, r4, r5); // bl 0x8066D808
    /* li r0, 0 */ // 0x80661288
    *(0x184 + r30) = r0; // stw @ 0x8066128C
    r3 = r30;
    FUN_80661344(r3); // bl 0x80661344
    r3 = r30;
    FUN_8066236C(r3, r3); // bl 0x8066236C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806612A4
    r30 = *(8 + r1); // lwz @ 0x806612A8
    r0 = *(0x14 + r1); // lwz @ 0x806612AC
    return;
}