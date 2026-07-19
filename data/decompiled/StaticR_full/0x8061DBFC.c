/* Function at 0x8061DBFC, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DBFC(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061DBFC
    r3 = *(4 + r3); // lwz @ 0x8061DC00
    *(0xa0 + r3) = r4; // stw @ 0x8061DC04
    return;
}