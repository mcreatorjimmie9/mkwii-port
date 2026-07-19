/* Function at 0x8078F8E8, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8078F8E8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8078F8FC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078F904
    r29 = r3;
    if (>=) goto 0x0x8078f934;
    /* slwi r0, r5, 2 */ // 0x8078F910
    r31 = r3 + r0; // 0x8078F914
    r3 = *(0x80 + r31); // lwzu @ 0x8078F918
    if (==) goto 0x0x8078f938;
    if (==) goto 0x0x8078f938;
    /* li r4, 0 */ // 0x8078F928
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x8078f938 */ // 0x8078F930
    /* li r31, 0 */ // 0x8078F934
    if (==) goto 0x0x8078f95c;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8078F94C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f960 */ // 0x8078F958
    /* li r3, 0 */ // 0x8078F95C
    r0 = *(0x24 + r1); // lwz @ 0x8078F960
    r31 = *(0x1c + r1); // lwz @ 0x8078F964
    r30 = *(0x18 + r1); // lwz @ 0x8078F968
    r29 = *(0x14 + r1); // lwz @ 0x8078F96C
}