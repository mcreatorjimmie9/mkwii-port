/* Function at 0x808C726C, size=392 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808C726C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x808C7274
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x808C7288
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x808C7290
    r5 = *(0 + r5); // lwz @ 0x808C7294
    r31 = *(0x20c + r4); // lwz @ 0x808C7298
    r0 = *(0x36 + r5); // lha @ 0x808C729C
    if (<) goto 0x0x808c72c4;
    /* lis r3, 1 */ // 0x808C72A8
    /* clrlwi r4, r0, 0x18 */ // 0x808C72AC
    r0 = r3 + -0x6c10; // 0x808C72B0
    r0 = r0 * r4; // 0x808C72B4
    r3 = r5 + r0; // 0x808C72B8
    r28 = r3 + 0x38; // 0x808C72BC
    /* b 0x808c72c8 */ // 0x808C72C0
    /* li r28, 0 */ // 0x808C72C4
    FUN_808CFE7C(); // bl 0x808CFE7C
    if (==) goto 0x0x808c72f8;
    if (==) goto 0x0x808c730c;
    if (==) goto 0x0x808c7320;
    if (==) goto 0x0x808c7334;
    if (==) goto 0x0x808c7348;
    /* b 0x808c7358 */ // 0x808C72F4
    /* addis r4, r28, 1 */ // 0x808C72F8
    /* slwi r0, r3, 2 */ // 0x808C72FC
    r3 = r4 + r0; // 0x808C7300
    *(-0x6ed8 + r3) = r30; // stw @ 0x808C7304
    /* b 0x808c7358 */ // 0x808C7308
    /* addis r4, r28, 1 */ // 0x808C730C
    /* slwi r0, r3, 2 */ // 0x808C7310
    r3 = r4 + r0; // 0x808C7314
    *(-0x6ec8 + r3) = r30; // stw @ 0x808C7318
    /* b 0x808c7358 */ // 0x808C731C
    /* addis r4, r28, 1 */ // 0x808C7320
    /* slwi r0, r3, 2 */ // 0x808C7324
    r3 = r4 + r0; // 0x808C7328
    *(-0x6eb8 + r3) = r30; // stw @ 0x808C732C
    /* b 0x808c7358 */ // 0x808C7330
    /* addis r4, r28, 1 */ // 0x808C7334
    /* slwi r0, r3, 2 */ // 0x808C7338
    r3 = r4 + r0; // 0x808C733C
    *(-0x6ea8 + r3) = r30; // stw @ 0x808C7340
    /* b 0x808c7358 */ // 0x808C7344
    /* addis r4, r28, 1 */ // 0x808C7348
    /* slwi r0, r3, 2 */ // 0x808C734C
    r3 = r4 + r0; // 0x808C7350
    *(-0x6e98 + r3) = r30; // stw @ 0x808C7354
    if (<) goto 0x0x808c7394;
    /* li r28, 0 */ // 0x808C7360
    /* li r30, 1 */ // 0x808C7364
    r3 = *(0x6bc + r29); // lwz @ 0x808C7368
    r0 = r30 << r28; // slw
    /* and. r0, r3, r0 */ // 0x808C7370
    if (==) goto 0x0x808c7384;
    r4 = r28;
    r3 = r29 + 0x13bc; // 0x808C737C
    FUN_806A1D2C(r4, r3); // bl 0x806A1D2C
    r28 = r28 + 1; // 0x808C7384
    if (<) goto 0x0x808c7368;
    /* b 0x808c73d4 */ // 0x808C7390
    r0 = r31 + 1; // 0x808C7394
    /* li r31, 0 */ // 0x808C7398
    /* mulli r0, r0, 0x298 */ // 0x808C739C
    /* li r30, 1 */ // 0x808C73A0
    r3 = r29 + r0; // 0x808C73A4
    r28 = r3 + 0x6c4; // 0x808C73A8
    r3 = *(0x6bc + r29); // lwz @ 0x808C73AC
    r0 = r30 << r31; // slw
    /* and. r0, r3, r0 */ // 0x808C73B4
    if (==) goto 0x0x808c73c8;
    r3 = r28;
    r4 = r31;
    FUN_806755BC(r3, r4); // bl 0x806755BC
    r31 = r31 + 1; // 0x808C73C8
    if (<) goto 0x0x808c73ac;
    r0 = *(0x24 + r1); // lwz @ 0x808C73D4
    r31 = *(0x1c + r1); // lwz @ 0x808C73D8
    r30 = *(0x18 + r1); // lwz @ 0x808C73DC
    r29 = *(0x14 + r1); // lwz @ 0x808C73E0
    r28 = *(0x10 + r1); // lwz @ 0x808C73E4
    return;
}