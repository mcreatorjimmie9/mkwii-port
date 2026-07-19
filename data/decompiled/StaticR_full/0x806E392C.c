/* Function at 0x806E392C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E392C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806E393C
    *(8 + r1) = r30; // stw @ 0x806E3940
    /* li r30, 0 */ // 0x806E3944
    r3 = *(0 + r31); // lwz @ 0x806E3948
    r0 = r30 rlwinm 2; // rlwinm
    r3 = r3 + r0; // 0x806E3950
    r0 = *(0x276c + r3); // lwz @ 0x806E3954
    /* mulli r0, r0, 0x30 */ // 0x806E3958
    r3 = r0 + r3; // 0x806E395C
    r3 = *(0xf0 + r3); // lwz @ 0x806E3960
    r3 = *(0x10 + r3); // lwz @ 0x806E3964
    FUN_806E9F24(); // bl 0x806E9F24
    r30 = r30 + 1; // 0x806E396C
    if (<) goto 0x0x806e3948;
    r0 = *(0x14 + r1); // lwz @ 0x806E3978
    r31 = *(0xc + r1); // lwz @ 0x806E397C
    r30 = *(8 + r1); // lwz @ 0x806E3980
    return;
}