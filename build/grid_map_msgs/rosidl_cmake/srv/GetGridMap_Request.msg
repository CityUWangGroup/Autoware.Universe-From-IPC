# Frame id of the submap position request.
string frame_id

# Requested submap position in x-direction [m].
float64 position_x
  
# Requested submap position in y-direction [m].
float64 position_y

# Requested submap length in x-direction [m].
float64 length_x
  
# Requested submap width in y-direction [m].
float64 length_y

# Requested layers. If empty, get all layers.
string[] layers

