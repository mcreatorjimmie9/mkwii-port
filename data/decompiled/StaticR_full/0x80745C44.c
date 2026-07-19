/* Function at 0x80745C44, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80745C44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80745C58
    r0 = *(0xb8 + r3); // lwz @ 0x80745C5C
    if (<) goto 0x0x80745cb8;
    /* li r5, -1 */ // 0x80745C68
    /* li r6, 0 */ // 0x80745C6C
    *(0xb4 + r3) = r0; // sth @ 0x80745C70
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0xc4 + r3); // lwz @ 0x80745C78
    *(0xb8 + r3) = r5; // stw @ 0x80745C7C
    r5 = *(0xc8 + r3); // lwz @ 0x80745C80
    *(0xbc + r3) = r6; // stw @ 0x80745C84
    /* lhzx r0, r4, r0 */ // 0x80745C88
    /* mulli r0, r0, 0x1c */ // 0x80745C8C
    r30 = r5 + r0; // 0x80745C90
    r3 = r30 + 4; // 0x80745C94
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80745ce0;
    r3 = *(0xcc + r31); // lwz @ 0x80745CA4
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80745ce0 */ // 0x80745CB4
    r4 = *(0xbc + r3); // lwz @ 0x80745CB8
    r0 = *(0xb4 + r3); // lhz @ 0x80745CBC
    r4 = r4 + 1; // 0x80745CC0
    *(0xbc + r3) = r4; // stw @ 0x80745CC4
    r4 = *(0xc4 + r3); // lwz @ 0x80745CC8
}