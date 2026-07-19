/* Function at 0x806B6BE0, size=364 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_806B6BE0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r7, 0 */ // 0x806B6BE8
    /* li r4, 2 */ // 0x806B6BEC
    *(0x24 + r1) = r0; // stw @ 0x806B6BF0
    /* stmw r27, 0xc(r1) */ // 0x806B6BF4
    r29 = r3;
    r6 = *(0x176e + r3); // lbz @ 0x806B6BFC
    r0 = *(0x176c + r3); // lbz @ 0x806B6C00
    r5 = r6 + -2; // 0x806B6C04
    r7 = *(0 + r7); // lwz @ 0x806B6C08
    /* orc r4, r6, r4 */ // 0x806B6C10
    /* srwi r0, r5, 1 */ // 0x806B6C14
    r31 = r7 + 0x1800; // 0x806B6C18
    /* subf r0, r0, r4 */ // 0x806B6C1C
    /* srwi r30, r0, 0x1f */ // 0x806B6C20
    if (==) goto 0x0x806b6cc0;
    /* li r28, 0 */ // 0x806B6C28
    /* clrlwi r0, r28, 0x18 */ // 0x806B6C2C
    r5 = *(0x176c + r29); // lbz @ 0x806B6C30
    /* mulli r0, r0, 0x174 */ // 0x806B6C34
    r6 = r30;
    /* li r4, 0xb */ // 0x806B6C3C
    r3 = r29 + r0; // 0x806B6C40
    r3 = r3 + 0x5fc; // 0x806B6C44
    FUN_806B59EC(r6, r4, r3); // bl 0x806B59EC
    r28 = r28 + 1; // 0x806B6C4C
    if (<) goto 0x0x806b6c2c;
    /* li r28, 0 */ // 0x806B6C58
    /* b 0x806b6cac */ // 0x806B6C5C
    /* clrlwi r0, r28, 0x18 */ // 0x806B6C60
    /* mulli r0, r0, 0xf0 */ // 0x806B6C64
    r3 = r31 + r0; // 0x806B6C68
    r0 = *(0xd4 + r3); // lwz @ 0x806B6C6C
    r3 = *(0xe8 + r3); // lbz @ 0x806B6C70
    r0 = r3 + -1; // 0x806B6C78
    /* clrlwi r3, r0, 0x18 */ // 0x806B6C7C
    if (!=) goto 0x0x806b6c8c;
    r0 = r3 + 6; // 0x806B6C84
    /* clrlwi r3, r0, 0x18 */ // 0x806B6C88
    /* mulli r0, r3, 0x174 */ // 0x806B6C8C
    r5 = *(0x176c + r29); // lbz @ 0x806B6C90
    r6 = r30;
    /* clrlwi r4, r28, 0x18 */ // 0x806B6C98
    r3 = r29 + r0; // 0x806B6C9C
    r3 = r3 + 0x5fc; // 0x806B6CA0
    FUN_806B59EC(r6, r3); // bl 0x806B59EC
    r28 = r28 + 1; // 0x806B6CA8
    r0 = *(0x176f + r29); // lbz @ 0x806B6CAC
    /* clrlwi r3, r28, 0x18 */ // 0x806B6CB0
    if (<) goto 0x0x806b6c60;
    /* b 0x806b6d38 */ // 0x806B6CBC
    /* li r28, 0 */ // 0x806B6CC0
    /* b 0x806b6cf8 */ // 0x806B6CC4
    /* clrlwi r4, r28, 0x18 */ // 0x806B6CC8
    r5 = *(0x176c + r29); // lbz @ 0x806B6CCC
    /* mulli r0, r4, 0xf0 */ // 0x806B6CD0
    r6 = r30;
    r3 = r31 + r0; // 0x806B6CD8
    r3 = *(0xe8 + r3); // lbz @ 0x806B6CDC
    r0 = r3 + -1; // 0x806B6CE0
    /* mulli r0, r0, 0x174 */ // 0x806B6CE4
    r3 = r29 + r0; // 0x806B6CE8
    r3 = r3 + 0x5fc; // 0x806B6CEC
    FUN_806B59EC(r3); // bl 0x806B59EC
    r28 = r28 + 1; // 0x806B6CF4
    r27 = *(0x176f + r29); // lbz @ 0x806B6CF8
    /* clrlwi r0, r28, 0x18 */ // 0x806B6CFC
    if (<) goto 0x0x806b6cc8;
    /* b 0x806b6d2c */ // 0x806B6D08
    /* clrlwi r4, r27, 0x18 */ // 0x806B6D0C
    r5 = *(0x176c + r29); // lbz @ 0x806B6D10
    /* mulli r0, r4, 0x174 */ // 0x806B6D14
    r6 = r30;
    r3 = r29 + r0; // 0x806B6D1C
    r3 = r3 + 0x5fc; // 0x806B6D20
    FUN_806B59EC(r6, r3); // bl 0x806B59EC
    r27 = r27 + 1; // 0x806B6D28
    /* clrlwi r0, r27, 0x18 */ // 0x806B6D2C
    if (<) goto 0x0x806b6d0c;
    r0 = *(0x24 + r1); // lwz @ 0x806B6D3C
    return;
}