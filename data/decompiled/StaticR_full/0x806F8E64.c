/* Function at 0x806F8E64, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806F8E64(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x806F8E6C
    /* li r0, 1 */ // 0x806F8E74
    r6 = r0 << r4; // slw
    *(0x1c + r1) = r31; // stw @ 0x806F8E7C
    *(0x18 + r1) = r30; // stw @ 0x806F8E80
    *(0x14 + r1) = r29; // stw @ 0x806F8E84
    /* li r29, 0 */ // 0x806F8E88
    r5 = *(0 + r5); // lwz @ 0x806F8E8C
    r0 = *(0x36 + r5); // lha @ 0x806F8E90
    /* slwi r0, r0, 2 */ // 0x806F8E94
    r3 = r3 + r0; // 0x806F8E98
    r0 = *(0x79f4 + r3); // lwz @ 0x806F8E9C
    /* and. r0, r6, r0 */ // 0x806F8EA0
    if (==) goto 0x0x806f8f34;
    r3 = r4;
    FUN_806622BC(r3); // bl 0x806622BC
    r30 = r3;
    /* li r31, 0 */ // 0x806F8EB4
    /* li r4, 0 */ // 0x806F8EB8
    /* li r5, 0 */ // 0x806F8EBC
    /* li r6, 0 */ // 0x806F8EC0
    FUN_805E4A80(r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x806f8f24;
    r3 = r30;
    /* li r4, 1 */ // 0x806F8ED4
    /* li r5, 0 */ // 0x806F8ED8
    /* li r6, 0 */ // 0x806F8EDC
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x806f8f24;
    r3 = r30;
    /* li r4, 2 */ // 0x806F8EF0
    /* li r5, 0 */ // 0x806F8EF4
    /* li r6, 0 */ // 0x806F8EF8
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x806f8f24;
    r3 = r30;
    /* li r4, 2 */ // 0x806F8F0C
    /* li r5, 1 */ // 0x806F8F10
    /* li r6, 0 */ // 0x806F8F14
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (==) goto 0x0x806f8f28;
    /* li r31, 1 */ // 0x806F8F24
    if (==) goto 0x0x806f8f34;
    /* li r29, 1 */ // 0x806F8F30
    r31 = *(0x1c + r1); // lwz @ 0x806F8F34
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x806F8F3C
    r29 = *(0x14 + r1); // lwz @ 0x806F8F40
    r0 = *(0x24 + r1); // lwz @ 0x806F8F44
    return;
}