/* Function at 0x80731934, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80731934(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0x22 */ // 0x8073193C
    /* li r6, 0x23 */ // 0x80731940
    *(0x14 + r1) = r0; // stw @ 0x80731944
    /* li r7, 0 */ // 0x80731948
    *(0xc + r1) = r31; // stw @ 0x8073194C
    r31 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x80731954
    FUN_80731780(r7); // bl 0x80731780
    r4 = *(0x530 + r31); // lwz @ 0x8073195C
    r3 = r31;
    /* li r5, 0x23 */ // 0x80731964
    /* li r6, 0x24 */ // 0x80731968
    /* li r7, 1 */ // 0x8073196C
    FUN_80731780(r3, r5, r6, r7); // bl 0x80731780
    r0 = *(0x14 + r1); // lwz @ 0x80731974
    r31 = *(0xc + r1); // lwz @ 0x80731978
    return;
}