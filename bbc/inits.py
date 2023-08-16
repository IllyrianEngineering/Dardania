class Inits:
    """Handle the properties."""

    @staticmethod
    def setup_init_graphics_object_properties():
        """Setup the initial graphics object properties."""
        return {
            "General settings:": {
                "Name:": "SLS",
                "Draw order:": 0,
            },
            "Dimension settings:": {
                "Length:": 38,
                "Height:": 1000,
                "Area:": None,
                "Perimeter:": None,
                "Rotation:": 0,
                "Scale:": 1,
            },
            "Fill settings:": {
                "Fill:": True,
                "Fill pattern:": "SOLIDPATTERN",
                "Fill color:": "#ebd3b0",
                "Fill opacity:": 1,
            },
            "Pen settings:": {
                "Pen style:": "SOLIDLINE",
                "Pen color:": "#ffffff",
                "Pen thickness:": 5,
            },
        }

    @staticmethod
    def setup_init_matrix_graphics_objects_position(obj):
        """Setup the initial matrix graphics objects position."""
        return [
            [obj, obj, obj],
            [obj, obj, obj],
            [obj, obj, obj],
            [obj, obj, obj],
        ]

    @staticmethod
    def setup_init_graphics_scene_properties():
        """Setup the initial graphics scene properties."""
        return {
            "General settings:": {},
        }

    @staticmethod
    def setup_init_graphics_view_properties():
        """Setup the initial graphics view properties."""
        return {
            "General settings:": {
                "Background color:": "#000000",
                "Grid size:": 50,
                "Grid color:": "#C8C8C8",
                "X-axis color:": "#00FF00",
                "Y-axis color:": "#FF0000",
            },
        }
