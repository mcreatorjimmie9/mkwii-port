/* Function at 0x806F1BE8, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806F1BE8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F1BF8
    *(0x18 + r1) = r30; // stw @ 0x806F1BFC
    r30 = r4;
    /* li r4, 0 */ // 0x806F1C04
    *(0x14 + r1) = r29; // stw @ 0x806F1C08
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F1C10
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f1c34;
    r3 = *(0 + r31); // lwz @ 0x806F1C20
    /* li r4, 1 */ // 0x806F1C24
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f1c54;
    /* lis r3, 0 */ // 0x806F1C34
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F1C3C
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1C44
    r3 = r29 + r0; // 0x806F1C48
    r0 = *(4 + r3); // lbz @ 0x806F1C4C
    /* b 0x806f1c80 */ // 0x806F1C50
    /* lis r3, 0 */ // 0x806F1C54
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F1C5C
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f1c7c;
    /* slwi r0, r30, 3 */ // 0x806F1C6C
    r3 = r29 + r0; // 0x806F1C70
    r0 = *(0x14 + r3); // lbz @ 0x806F1C74
    /* b 0x806f1c80 */ // 0x806F1C78
    /* li r0, 0 */ // 0x806F1C7C
    if (==) goto 0x0x806f1cb4;
    if (==) goto 0x0x806f1cb4;
    if (==) goto 0x0x806f1cbc;
    if (==) goto 0x0x806f1cbc;
    if (==) goto 0x0x806f1cc4;
    if (==) goto 0x0x806f1cc4;
    /* b 0x806f1ccc */ // 0x806F1CB0
    /* li r3, 1 */ // 0x806F1CB4
    /* b 0x806f1cd0 */ // 0x806F1CB8
    /* li r3, 2 */ // 0x806F1CBC
    /* b 0x806f1cd0 */ // 0x806F1CC0
    /* li r3, 3 */ // 0x806F1CC4
    /* b 0x806f1cd0 */ // 0x806F1CC8
    /* li r3, 0 */ // 0x806F1CCC
    r0 = *(0x24 + r1); // lwz @ 0x806F1CD0
    r31 = *(0x1c + r1); // lwz @ 0x806F1CD4
    r30 = *(0x18 + r1); // lwz @ 0x806F1CD8
    r29 = *(0x14 + r1); // lwz @ 0x806F1CDC
    return;
}