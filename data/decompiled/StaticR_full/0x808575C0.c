/* Function at 0x808575C0, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808575C0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 1 */ // 0x808575D0
    *(0x18 + r1) = r30; // stw @ 0x808575D4
    *(0x14 + r1) = r29; // stw @ 0x808575D8
    r29 = r3;
    r4 = *(0 + r3); // lwz @ 0x808575E0
    r4 = *(4 + r4); // lwz @ 0x808575E4
    r4 = *(4 + r4); // lwz @ 0x808575E8
    r0 = r4 rlwinm 0; // rlwinm
    /* rlwimi. r0, r4, 0, 0x1c, 0x1c */ // 0x808575F0
    if (!=) goto 0x0x8085763c;
    /* li r30, 0 */ // 0x808575F8
    FUN_8061E2E8(); // bl 0x8061E2E8
    r0 = r3 + -1; // 0x80857600
    /* cntlzw r0, r0 */ // 0x80857604
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x80857608
    if (!=) goto 0x0x80857630;
    r3 = r29;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    FUN_8060C834(r3); // bl 0x8060C834
    /* neg r0, r3 */ // 0x8085761C
    r0 = r0 | r3; // 0x80857620
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x80857624
    if (==) goto 0x0x80857630;
    /* li r30, 1 */ // 0x8085762C
    if (!=) goto 0x0x8085763c;
    /* li r31, 0 */ // 0x80857638
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x80857640
    r30 = *(0x18 + r1); // lwz @ 0x80857644
    r29 = *(0x14 + r1); // lwz @ 0x80857648
    r0 = *(0x24 + r1); // lwz @ 0x8085764C
    return;
}