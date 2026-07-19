/* Function at 0x806F1E64, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806F1E64(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F1E74
    *(0x18 + r1) = r30; // stw @ 0x806F1E78
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806F1E80
    r29 = r4;
    /* li r4, 0 */ // 0x806F1E88
    *(0x10 + r1) = r28; // stw @ 0x806F1E8C
    r28 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F1E94
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f1eb8;
    r3 = *(0 + r31); // lwz @ 0x806F1EA4
    /* li r4, 1 */ // 0x806F1EA8
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f1ed8;
    /* lis r3, 0 */ // 0x806F1EB8
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x806F1EC0
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1EC8
    r3 = r28 + r0; // 0x806F1ECC
    r31 = *(2 + r3); // lbz @ 0x806F1ED0
    /* b 0x806f1f04 */ // 0x806F1ED4
    /* lis r3, 0 */ // 0x806F1ED8
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x806F1EE0
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f1f00;
    /* slwi r0, r29, 3 */ // 0x806F1EF0
    r3 = r28 + r0; // 0x806F1EF4
    r31 = *(0x12 + r3); // lbz @ 0x806F1EF8
    /* b 0x806f1f04 */ // 0x806F1EFC
    /* li r31, 0x14 */ // 0x806F1F00
    /* lis r3, 0 */ // 0x806F1F04
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x806F1F0C
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1F14
    r3 = r28 + r0; // 0x806F1F18
    *(2 + r3) = r31; // stb @ 0x806F1F1C
    *(4 + r3) = r30; // stb @ 0x806F1F20
    r31 = *(0x1c + r1); // lwz @ 0x806F1F24
    r30 = *(0x18 + r1); // lwz @ 0x806F1F28
    r29 = *(0x14 + r1); // lwz @ 0x806F1F2C
    r28 = *(0x10 + r1); // lwz @ 0x806F1F30
    r0 = *(0x24 + r1); // lwz @ 0x806F1F34
    return;
}