/* Function at 0x806601BC, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_806601BC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806601D8
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806601E0
    r28 = r3;
    if (<=) goto 0x0x806601f8;
    if (==) goto 0x0x8066023c;
    /* b 0x8066026c */ // 0x806601F4
    /* slwi r0, r4, 2 */ // 0x806601F8
    /* clrlwi r4, r5, 0x10 */ // 0x806601FC
    r31 = r3 + r0; // 0x80660200
    r3 = *(0x54 + r31); // lwz @ 0x80660204
    FUN_805ACCB0(); // bl 0x805ACCB0
    /* lis r4, 0 */ // 0x8066020C
    r7 = *(0xb8 + r3); // lwz @ 0x80660210
    r6 = *(0 + r4); // lwz @ 0x80660214
    /* clrlwi r4, r29, 0x18 */ // 0x80660218
    /* li r5, 0 */ // 0x8066021C
    r3 = *(0x90 + r6); // lwz @ 0x80660220
    /* li r6, 0 */ // 0x80660224
    FUN_80684DF4(r5, r6); // bl 0x80684DF4
    r3 = *(0x54 + r31); // lwz @ 0x8066022C
    /* clrlwi r4, r30, 0x10 */ // 0x80660230
    FUN_805ACC90(r6); // bl 0x805ACC90
    /* b 0x8066026c */ // 0x80660238
    /* lis r3, 0 */ // 0x8066023C
    /* clrlwi r5, r5, 0x18 */ // 0x80660240
    r3 = *(0 + r3); // lwz @ 0x80660244
    /* li r4, 1 */ // 0x80660248
    /* li r6, -1 */ // 0x8066024C
    r3 = *(0x90 + r3); // lwz @ 0x80660250
    FUN_80684DBC(r4, r6); // bl 0x80684DBC
    /* slwi r0, r29, 2 */ // 0x80660258
    /* clrlwi r4, r30, 0x10 */ // 0x8066025C
    r3 = r28 + r0; // 0x80660260
    r3 = *(0x54 + r3); // lwz @ 0x80660264
    FUN_805ACC90(); // bl 0x805ACC90
    /* li r0, 0xd */ // 0x8066026C
    *(0x94 + r28) = r0; // stw @ 0x80660270
    r31 = *(0x1c + r1); // lwz @ 0x80660274
    r30 = *(0x18 + r1); // lwz @ 0x80660278
    r29 = *(0x14 + r1); // lwz @ 0x8066027C
    r28 = *(0x10 + r1); // lwz @ 0x80660280
    r0 = *(0x24 + r1); // lwz @ 0x80660284
    return;
}