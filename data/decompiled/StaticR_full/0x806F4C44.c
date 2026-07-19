/* Function at 0x806F4C44, size=152 bytes */
/* Stack frame: 0 bytes */

int FUN_806F4C44(int r3, int r4, int r5, int r6)
{
    r0 = *(0 + r3); // lbz @ 0x806F4C44
    /* cmpwi cr6, r0, 0 */
    if (!=) goto 0x0x806f4c58;
    /* li r3, 0 */ // 0x806F4C50
    return;
    /* lis r4, 0 */ // 0x806F4C58
    /* li r0, 1 */ // 0x806F4C5C
    r5 = *(0 + r4); // lwz @ 0x806F4C60
    r4 = *(0x291c + r5); // lwz @ 0x806F4C64
    /* mulli r4, r4, 0x58 */ // 0x806F4C68
    r4 = r5 + r4; // 0x806F4C6C
    r5 = *(0x59 + r4); // lbz @ 0x806F4C70
    r4 = *(0x48 + r4); // lwz @ 0x806F4C74
    r0 = r0 << r5; // slw
    /* andc r4, r4, r0 */ // 0x806F4C7C
    /* cmpwi cr1, r4, 0 */
    if (==) goto 0x0x806f4cd4;
    r0 = *(0x9e0 + r3); // lwz @ 0x806F4C88
    r0 = r4 & r0; // 0x806F4C8C
    /* subf r0, r4, r0 */ // 0x806F4C90
    /* cntlzw r0, r0 */ // 0x806F4C94
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x806F4C98
    if (==) goto 0x0x806f4ccc;
    if (!=) goto 0x0x806f4cac;
    /* li r0, 0 */ // 0x806F4CA4
    /* b 0x806f4ccc */ // 0x806F4CA8
    if (==) goto 0x0x806f4cc8;
    r0 = *(0x9e4 + r3); // lwz @ 0x806F4CB0
    r0 = r4 & r0; // 0x806F4CB4
    /* subf r0, r4, r0 */ // 0x806F4CB8
    /* cntlzw r0, r0 */ // 0x806F4CBC
    /* srwi r0, r0, 5 */ // 0x806F4CC0
    /* b 0x806f4ccc */ // 0x806F4CC4
    /* li r0, 0 */ // 0x806F4CC8
    r3 = r0;
    return;
    /* li r3, 0 */ // 0x806F4CD4
    return;
}