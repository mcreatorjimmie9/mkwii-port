/* Function at 0x806523D8, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806523D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r3 = *(0xb8 + r4); // lwz @ 0x806523E0
    *(0xc + r1) = r31; // stw @ 0x806523E8
    *(8 + r1) = r30; // stw @ 0x806523EC
    FUN_806622BC(); // bl 0x806622BC
    r30 = r3;
    /* li r31, 0 */ // 0x806523F8
    /* li r4, 0 */ // 0x806523FC
    /* li r5, 0 */ // 0x80652400
    /* li r6, 0 */ // 0x80652404
    FUN_805E4A80(r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80652468;
    r3 = r30;
    /* li r4, 1 */ // 0x80652418
    /* li r5, 0 */ // 0x8065241C
    /* li r6, 0 */ // 0x80652420
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80652468;
    r3 = r30;
    /* li r4, 2 */ // 0x80652434
    /* li r5, 0 */ // 0x80652438
    /* li r6, 0 */ // 0x8065243C
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80652468;
    r3 = r30;
    /* li r4, 2 */ // 0x80652450
    /* li r5, 1 */ // 0x80652454
    /* li r6, 0 */ // 0x80652458
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (==) goto 0x0x8065246c;
    /* li r31, 1 */ // 0x80652468
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80652470
    r30 = *(8 + r1); // lwz @ 0x80652474
    r0 = *(0x14 + r1); // lwz @ 0x80652478
    return;
}