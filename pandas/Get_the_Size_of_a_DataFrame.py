import pandas as pd
from typing import List

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    rows, cols = players.shape
    return [rows, cols]