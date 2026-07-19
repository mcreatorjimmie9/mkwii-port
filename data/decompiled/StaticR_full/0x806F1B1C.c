/* Function at 0x806F1B1C, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806F1B1C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F1B2C
    *(0x18 + r1) = r30; // stw @ 0x806F1B30
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F1B38
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F1B40
    FUN_806E44C0(); // bl 0x806E44C0
    if (==) goto 0x0x806f1b6c;
    r3 = *(0 + r31); // lwz @ 0x806F1B50
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1B5C
    r3 = r29 + r0; // 0x806F1B60
    r0 = *(3 + r3); // lbz @ 0x806F1B64
    /* b 0x806f1b94 */ // 0x806F1B68
    r3 = *(0 + r31); // lwz @ 0x806F1B6C
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f1b90;
    /* slwi r0, r30, 3 */ // 0x806F1B80
    r3 = r29 + r0; // 0x806F1B84
    r0 = *(0x13 + r3); // lbz @ 0x806F1B88
    /* b 0x806f1b94 */ // 0x806F1B8C
    /* li r0, 0 */ // 0x806F1B90
    if (==) goto 0x0x806f1bb0;
    if (==) goto 0x0x806f1bb8;
    if (==) goto 0x0x806f1bc0;
    /* b 0x806f1bc8 */ // 0x806F1BAC
    /* li r3, 1 */ // 0x806F1BB0
    /* b 0x806f1bcc */ // 0x806F1BB4
    /* li r3, 2 */ // 0x806F1BB8
    /* b 0x806f1bcc */ // 0x806F1BBC
    /* li r3, 3 */ // 0x806F1BC0
    /* b 0x806f1bcc */ // 0x806F1BC4
    /* li r3, 0 */ // 0x806F1BC8
    r0 = *(0x24 + r1); // lwz @ 0x806F1BCC
    r31 = *(0x1c + r1); // lwz @ 0x806F1BD0
    r30 = *(0x18 + r1); // lwz @ 0x806F1BD4
    r29 = *(0x14 + r1); // lwz @ 0x806F1BD8
    return;
}