/* Function at 0x807DBEA4, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_807DBEA4(int r4)
{
    r4 = *(0 + r4); // lwz @ 0x807DBEA4
    r0 = *(0x18 + r4); // lha @ 0x807DBEA8
    *(4 + r3) = r0; // stw @ 0x807DBEAC
    return;
}