/* Function at 0x806F1FD8, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806F1FD8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F1FE8
    *(0x18 + r1) = r30; // stw @ 0x806F1FEC
    r30 = r4;
    /* li r4, 0 */ // 0x806F1FF4
    *(0x14 + r1) = r29; // stw @ 0x806F1FF8
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F2000
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f2024;
    r3 = *(0 + r31); // lwz @ 0x806F2010
    /* li r4, 1 */ // 0x806F2014
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f2044;
    /* lis r3, 0 */ // 0x806F2024
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F202C
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2034
    r3 = r29 + r0; // 0x806F2038
    r3 = *(2 + r3); // lbz @ 0x806F203C
    /* b 0x806f2070 */ // 0x806F2040
    /* lis r3, 0 */ // 0x806F2044
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F204C
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f206c;
    /* slwi r0, r30, 3 */ // 0x806F205C
    r3 = r29 + r0; // 0x806F2060
    r3 = *(0x12 + r3); // lbz @ 0x806F2064
    /* b 0x806f2070 */ // 0x806F2068
    /* li r3, 0x14 */ // 0x806F206C
    r0 = *(0x24 + r1); // lwz @ 0x806F2070
    r31 = *(0x1c + r1); // lwz @ 0x806F2074
    r30 = *(0x18 + r1); // lwz @ 0x806F2078
    r29 = *(0x14 + r1); // lwz @ 0x806F207C
    return;
}