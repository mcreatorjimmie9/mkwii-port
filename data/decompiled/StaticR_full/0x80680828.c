/* Function at 0x80680828, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80680828(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80680830
    *(0xc + r1) = r31; // stw @ 0x80680838
    *(8 + r1) = r30; // stw @ 0x8068083C
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x80680844
    r4 = *(0x4b0 + r30); // lwz @ 0x80680848
    r31 = r3 + 0x34; // 0x8068084C
    r3 = r31;
    FUN_8067F3DC(r3); // bl 0x8067F3DC
    r0 = *(0x4bc + r30); // lwz @ 0x80680858
    if (!=) goto 0x0x806808b8;
    r0 = *(8 + r30); // lwz @ 0x80680864
    if (==) goto 0x0x80680878;
    if (!=) goto 0x0x806808b8;
    r4 = *(0x4b8 + r30); // lwz @ 0x80680878
    FUN_8067FAAC(); // bl 0x8067FAAC
    if (!=) goto 0x0x806808b8;
    /* li r0, 0 */ // 0x80680888
    *(0x4bc + r30) = r0; // stw @ 0x8068088C
    r3 = r30 + 0x1c8; // 0x80680890
    /* li r4, 0x26ac */ // 0x80680894
    /* li r5, 0 */ // 0x80680898
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r0 = *(8 + r30); // lwz @ 0x806808A0
    if (!=) goto 0x0x806808b8;
    r4 = *(0x4b0 + r30); // lwz @ 0x806808AC
    r3 = r31;
    FUN_8067F750(r3); // bl 0x8067F750
    r0 = *(0x14 + r1); // lwz @ 0x806808B8
    r31 = *(0xc + r1); // lwz @ 0x806808BC
    r30 = *(8 + r1); // lwz @ 0x806808C0
    return;
}