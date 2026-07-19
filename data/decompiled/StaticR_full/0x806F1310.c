/* Function at 0x806F1310, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_806F1310(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x806F1318
    *(0x14 + r1) = r29; // stw @ 0x806F1328
    *(0x10 + r1) = r28; // stw @ 0x806F132C
    r28 = r3;
    r4 = *(0 + r4); // lwz @ 0x806F1334
    r0 = *(0xb74 + r4); // lwz @ 0x806F1338
    if (==) goto 0x0x806f1350;
    if (==) goto 0x0x806f13c4;
    /* b 0x806f13c8 */ // 0x806F134C
    /* li r29, 0 */ // 0x806F1350
    /* lis r31, 0 */ // 0x806F1354
    /* b 0x806f1384 */ // 0x806F1358
    r4 = r29;
    FUN_806E9970(r4); // bl 0x806E9970
    r30 = r3;
    r3 = r28;
    r4 = r30;
    FUN_806F3660(r4, r3, r4); // bl 0x806F3660
    r3 = r28;
    r4 = r30;
    FUN_806F3A9C(r3, r4, r3, r4); // bl 0x806F3A9C
    r29 = r29 + 1; // 0x806F1380
    r3 = *(0 + r31); // lwz @ 0x806F1384
    r0 = *(0x291c + r3); // lwz @ 0x806F1388
    /* mulli r0, r0, 0x58 */ // 0x806F138C
    r4 = r3 + r0; // 0x806F1390
    r0 = *(0x58 + r4); // lbz @ 0x806F1394
    if (<) goto 0x0x806f135c;
    r3 = r28;
    FUN_806F2DC8(r3); // bl 0x806F2DC8
    r3 = r28;
    FUN_806F2994(r3, r3); // bl 0x806F2994
    r3 = r28;
    FUN_806F2A64(r3, r3, r3); // bl 0x806F2A64
    r3 = r28;
    FUN_806F3D90(r3, r3, r3); // bl 0x806F3D90
    /* b 0x806f13c8 */ // 0x806F13C0
    FUN_806F2A64(r3, r3); // bl 0x806F2A64
    r0 = *(0x24 + r1); // lwz @ 0x806F13C8
    r31 = *(0x1c + r1); // lwz @ 0x806F13CC
    r30 = *(0x18 + r1); // lwz @ 0x806F13D0
    r29 = *(0x14 + r1); // lwz @ 0x806F13D4
    r28 = *(0x10 + r1); // lwz @ 0x806F13D8
    return;
}